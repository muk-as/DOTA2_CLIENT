#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Mirana_Leap : public server::CDOTABaseAbility
    {
    public:
        bool m_bIsVectorTargeted; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5c9[0x3]; // 0x5c9
        Vector m_vEndpoint; // 0x5cc        
        Vector m_vLandPosition; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Mirana_Leap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Mirana_Leap) == 0x5e8);
};
