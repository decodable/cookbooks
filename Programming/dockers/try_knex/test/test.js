const knex = require('../db.js');

var assert = require('assert');

describe('Table Users', () => {

  before( async function() { 
    await knex('users').where('username', 'xiaomin').del();
  });

  describe('should be no err when insert a new user', function() {
    it('should have and have only one user', async function() {
      let username = 'xiaomin';
      let password = '123456';
      await knex('users').insert({
        username,
        password
      });
      users = await knex('users').select('username');
      assert.equal(users.length, 1);
      assert.equal(users[0].username, username);
    });
  });

  after(async function() {
    await knex('users').where('username', 'xiaomin').del();
  });
});

after( async function() { 
  await knex.destroy();
});
