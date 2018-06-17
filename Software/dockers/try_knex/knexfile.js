module.exports = {

  development: {
		client: 'sqlite3',
		connection: {
			filename: "./db_dev.sqlite"
		},
    useNullAsDefault: true
	}
}
