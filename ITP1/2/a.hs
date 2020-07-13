import Control.Applicative


main = do
  [a, b] <- map ( read :: String -> Int ) . words <$> getLine
  let rel | a<b = "<"
          | a>b = ">"
          | otherwise = "=="
  putStrLn $ "a " ++ rel ++ " b"

