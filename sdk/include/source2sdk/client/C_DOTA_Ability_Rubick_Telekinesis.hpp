#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
    };
};

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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "Vector m_vStartLocation"
        #pragma pack(push, 1)
        class C_DOTA_Ability_Rubick_Telekinesis : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vStartLocation; // 0x688            
            Vector m_vLandLocation; // 0x694            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x6a0            
            uint8_t _pad06a4[0x4]; // 0x6a4
            source2sdk::client::C_DOTA_BaseNPC* m_pTarget; // 0x6a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Rubick_Telekinesis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Rubick_Telekinesis) == 0x6b0);
    };
};
