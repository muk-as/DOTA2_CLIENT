#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1da8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float m_flDamageTaken"
        // static metadata: MNetworkVarNames "float m_flLastHit"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastTargetDummyDamageTime"
        #pragma pack(push, 1)
        class C_DOTA_Unit_TargetDummy : public source2sdk::client::C_DOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            float m_flDamageTaken; // 0x1d98            
            // metadata: MNetworkEnable
            float m_flLastHit; // 0x1d9c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartDamageTime; // 0x1da0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastTargetDummyDamageTime; // 0x1da4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_TargetDummy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_TargetDummy) == 0x1da8);
    };
};
