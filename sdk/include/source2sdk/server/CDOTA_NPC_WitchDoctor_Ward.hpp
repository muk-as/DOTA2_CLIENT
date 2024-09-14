#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
    // Size: 0x1818
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nTargetType"
    // static metadata: MNetworkVarNames "int m_nTargetFlags"
    #pragma pack(push, 1)
    class CDOTA_NPC_WitchDoctor_Ward : public server::CDOTA_BaseNPC_Additive
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nTargetType; // 0x1810        
        // metadata: MNetworkEnable
        int32_t m_nTargetFlags; // 0x1814        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NPC_WitchDoctor_Ward because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NPC_WitchDoctor_Ward) == 0x1818);
};
