#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTAGameEvents.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTACustomGameEvents : public source2sdk::server::CDOTAGameEvents
        {
        public:
            // Datamap fields:
            // int32_t InputSetGameWinner; // 0x_
            // void InputLevelAllHeroesUpOnce; // 0x_
            // void InputLevelAllHeroesToMax; // 0x_
            // int32_t InputLevelAllHeroesToLevel; // 0x_
            // bool InputSetStashPurchasingDisabled; // 0x_
            // bool InputSetFogOfWarDisabled; // 0x_
            // bool InputSetUnseenFogOfWarEnabled; // 0x_
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CDOTACustomGameEvents) == 0x_);
    };
};
