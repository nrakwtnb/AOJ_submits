import Control.Applicative


main = do
  [h, w] <- map read . words <$> getLine
  putStrLn . unwords . map show $ [h * w, 2 * (h + w)]

