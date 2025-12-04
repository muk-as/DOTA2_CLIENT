#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

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
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float m_flDamageTaken"
        // static metadata: MNetworkVarNames "float m_flLastHit"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastTargetDummyDamageTime"
        #pragma pack(push, 1)
        class CDOTA_Unit_TargetDummy : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            float m_flDamageTaken; // 0x_            
            // metadata: MNetworkEnable
            float m_flLastHit; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartDamageTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastTargetDummyDamageTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_TargetDummy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_TargetDummy) == 0x_);
    };
};
