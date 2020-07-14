import Control.Applicative
import Data.List

-- maximum :: [Int] -> Int
-- maximum (x:xs) | (maximum xs) > x = maximum xs
--                | otherwise        = x

main = do
  [a, b, c] <- map ( read :: String -> Int ) . words <$> getLine
  let z = sort [a,b,c]
  -- let z = a + b + c
  putStrLn $ unwords $ map show $ z

