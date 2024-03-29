% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/flags.R
\name{flags}
\alias{flags}
\alias{flags_available}
\alias{flags_describe}
\alias{flags_used}
\title{Markdown parser flags}
\usage{
flags_available()

flags_describe()

flags_used(md)
}
\arguments{
\item{md}{Markdown ast object}
}
\value{
\code{flags_available()} returns a character vector of available flags accepted by \code{parse_md()}.

\code{flags_describe()} returns a tibble with columns \code{flag} and \code{description} describing each flag.

\code{flags_used()} returns a character vector of flags used in a parsed markdown document.
}
\description{
The \href{https://github.com/mity/md4c}{\code{md4c}} library supports a number of markdown
variants / options. The parsing of these is controlled by flags passed to the
parser. The following functions provide commonly used utilities for these flags.
}
\examples{

flags_available()

flags_describe()

md_file = system.file("examples/commonmark.md", package = "md4r")
md = parse_md(md_file)
flags_used(md)

}
