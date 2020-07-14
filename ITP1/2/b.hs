import Control.Applicative


main = do
  [a, b, c] <- map ( read :: String -> Int ) . words <$> getLine
  let rel | a<b && b<c = "Yes"
          | otherwise = "No"
  putStrLn $ rel

