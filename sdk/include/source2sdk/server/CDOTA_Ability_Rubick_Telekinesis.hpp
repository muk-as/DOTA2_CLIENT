#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "Vector m_vStartLocation"
        #pragma pack(push, 1)
        class CDOTA_Ability_Rubick_Telekinesis : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vStartLocation; // 0x5c0            
            Vector m_vLandLocation; // 0x5cc            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x5d8            
            uint8_t _pad05dc[0x4]; // 0x5dc
            source2sdk::server::CDOTA_BaseNPC* m_pTarget; // 0x5e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Rubick_Telekinesis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Rubick_Telekinesis) == 0x5e8);
    };
};
