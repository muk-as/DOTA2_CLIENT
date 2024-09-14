#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1e70
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nAttackState"
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Dawnbreaker : public server::CDOTA_BaseNPC_Hero
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nAttackState; // 0x1e68        
        entity2::GameTime_t m_flLastAttackAnimAdvanceTime; // 0x1e6c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Dawnbreaker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Dawnbreaker) == 0x1e70);
};
