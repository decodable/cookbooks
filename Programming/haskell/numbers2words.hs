-- From Thinking Functionally with Haskell
-- convert 308000 = "three hundred and eight thousand"
-- convert 308000 = "three hundred and eight thousand"
-- convert 369401 = "three hundred and sixty-nine thousand 
--                   four hundred and one"

units, teens, tens :: [String]
units = ["zero","one","two","three","four","five","six","seven","eight","nine"]
teens = ["ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"]
tens = ["zero","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"]

convert1 :: Int -> String
convert1 n = units!!n

convert2 :: Int -> String
convert2 n
  | t == 0       = convert1 u
  | t == 1       = teens!!u
  | u == 0       = tens!!t
  | otherwise    = tens!!t ++ "-" ++ convert1 u
  where (t, u) = (n `div` 10, n `mod` 10)

convert3 :: Int -> String
convert3 n
  | h == 0       = convert2 t
  | t == 0       = convert1 h ++ " hundred"
  | otherwise    = convert1 h ++ " hundred and " ++ convert2 t
  where (h, t) = (n `div` 100, n `mod` 100)

convert6 :: Int -> String
convert6 n
  | m == 0      = convert3 h
  | h == 0       = convert3 m ++ " thousand"
  | otherwise    = convert3 m ++ " thousand and " ++ convert3 h
  where (m, h) = (n `div` 1000, n `mod` 1000)

convert :: Int -> String
convert = convert6
