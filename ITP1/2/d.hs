import Control.Applicative

main = do
  [w, h, x, y, r] <- map ( read :: String -> Int ) . words <$> getLine
  let horizontal = r <= x && x <= w-r
  let vertical = r <= y && y <= h-r
  let result  | horizontal && vertical = "Yes"
              | otherwise = "No"
  putStrLn $ result

