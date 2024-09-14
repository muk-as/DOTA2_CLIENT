#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vStartLocation"
    #pragma pack(push, 1)
    class CDOTA_Ability_Rubick_Telekinesis : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vStartLocation; // 0x5a0        
        Vector m_vLandLocation; // 0x5ac        
        entity2::GameTime_t m_flStartTime; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4]; // 0x5bc
        server::CDOTA_BaseNPC* m_pTarget; // 0x5c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Rubick_Telekinesis because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Rubick_Telekinesis) == 0x5c8);
};
