import Control.Applicative

addcase :: (Int, String) -> String
addcase (x,y) = "Case " ++ show(x) ++ ": " ++ y

main = do
  inputs <- lines <$> getContents
  let valid = takeWhile (/= "0") $ inputs
  let cases = map addcase $ zip [1..] valid
  mapM_ putStrLn cases

