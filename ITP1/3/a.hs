
main = do
  let text = take 1000 $ repeat "Hello World\n"
  -- putStrLn $ unlines $ text
  putStrLn $ init $ concat $ text

