import Control.Applicative

t2h :: Int -> Int
t2h t = div t 3600
t2m :: Int -> Int
t2m t = mod (div t 60) 60
t2s :: Int -> Int
t2s t = mod t 60

main = do
  t <- read <$> getLine
  let h = t2h t
  let m = t2m t
  let s = t2s t
  putStrLn $ show h ++ ":" ++ show m ++ ":" ++ show s


