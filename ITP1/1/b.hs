import Control.Applicative

main = do
  x <- read <$> getLine
  print $ x^3

