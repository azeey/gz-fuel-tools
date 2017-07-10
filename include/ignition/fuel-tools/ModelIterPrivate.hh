/*
 * Copyright (C) 2017 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef IGNITION_FUEL_TOOLS_MODELITERPRIVATE_HH_
#define IGNITION_FUEL_TOOLS_MODELITERPRIVATE_HH_

#include <array>
#include <memory>

#include <ignition/fuel-tools/ModelIdentifier.hh>

namespace ignition
{
  namespace fuel_tools
  {
    /// \brief forward declaration
    class ModelIter;

    /// \brief forward declaration
    class FuelClient;

    /// \brief Private class, do not include or instantiate
    class ModelIterPrivate
    {
      friend FuelClient;

      friend ModelIter;

      // TODO Page? What's being requested?

      /// \brief Model identifiers that have been requested
      private: std::vector<ModelIdentifier> ids;

      /// \brief where the current iterator is in the list of ids
      private: std::vector<ModelIdentifier>::iterator idIter;
    };
  }
}

#endif

