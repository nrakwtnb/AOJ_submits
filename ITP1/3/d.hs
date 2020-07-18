import Control.Applicative

main = do
  [a,b,c] <- map (read :: String -> Int) . words <$> getLine
  let residues = map (mod c) [a..b]
  let divisables = map (fromEnum :: Bool -> Int) $ map (== 0) residues
  putStrLn $ show $ foldr (+) 0 divisables

