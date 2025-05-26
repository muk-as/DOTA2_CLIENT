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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ee0
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
            float m_flDamageTaken; // 0x1ed0            
            // metadata: MNetworkEnable
            float m_flLastHit; // 0x1ed4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartDamageTime; // 0x1ed8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastTargetDummyDamageTime; // 0x1edc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_TargetDummy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_TargetDummy) == 0x1ee0);
    };
};
