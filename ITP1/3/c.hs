import Control.Applicative
import Data.List


main = do
  l <- lines <$> getContents
  let w = map words l :: [[String]]
  let wi = map (map (read :: String -> Int) ) w :: [[Int]]
  let s = map sort $ takeWhile (/= [0,0]) wi :: [[Int]]
  let ss = map (map show) s :: [[String]]
  let ss_cat = map unwords ss :: [String]
  mapM_ putStrLn ss_cat

