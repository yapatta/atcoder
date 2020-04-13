import           Control.Monad
import           Control.Applicative
import           Data.List

calc a b c = max (c - (a - b)) 0

main :: IO ()
main = do
    [a, b, c] <- map read . words <$> getLine
    print (calc a b c)
