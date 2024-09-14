#pragma once
#include "source2sdk/server/CDOTAGameEvents.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTACustomGameEvents : public server::CDOTAGameEvents
    {
    public:
        // Datamap fields:
        // int32_t InputSetGameWinner; // 0x0
        // void InputLevelAllHeroesUpOnce; // 0x0
        // void InputLevelAllHeroesToMax; // 0x0
        // int32_t InputLevelAllHeroesToLevel; // 0x0
        // bool InputSetStashPurchasingDisabled; // 0x0
        // bool InputSetFogOfWarDisabled; // 0x0
        // bool InputSetUnseenFogOfWarEnabled; // 0x0
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTACustomGameEvents) == 0x5a8);
};
