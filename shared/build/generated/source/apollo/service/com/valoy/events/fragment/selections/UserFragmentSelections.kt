//
// AUTO-GENERATED FILE. DO NOT MODIFY.
//
// This class was automatically generated by Apollo GraphQL version '4.0.0-beta.6'.
//
package com.valoy.events.fragment.selections

import com.apollographql.apollo3.api.CompiledField
import com.apollographql.apollo3.api.CompiledSelection
import com.apollographql.apollo3.api.notNull
import com.valoy.events.type.GraphQLInt
import com.valoy.events.type.GraphQLString
import kotlin.collections.List

public object UserFragmentSelections {
  public val __root: List<CompiledSelection> = listOf(
        CompiledField.Builder(
          name = "id",
          type = GraphQLInt.type.notNull()
        ).build(),
        CompiledField.Builder(
          name = "name",
          type = GraphQLString.type.notNull()
        ).build(),
        CompiledField.Builder(
          name = "lastname",
          type = GraphQLString.type.notNull()
        ).build(),
        CompiledField.Builder(
          name = "email",
          type = GraphQLString.type.notNull()
        ).build()
      )
}
