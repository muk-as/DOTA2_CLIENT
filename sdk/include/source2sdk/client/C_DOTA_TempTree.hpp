#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xaa0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "Vector m_vecTreeCircleCenter"
        // static metadata: MNetworkVarNames "bool m_bCanApplyTreeCostume"
        // static metadata: MNetworkVarNames "bool m_bIsMangoTree"
        // static metadata: MNetworkVarNames "bool m_bIsPartOfFowSystem"
        #pragma pack(push, 1)
        class C_DOTA_TempTree : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad0998[0x30]; // 0x998
            source2sdk::entity2::GameTime_t m_fExpireTime; // 0x9c8            
            // metadata: MNetworkEnable
            Vector m_vecTreeCircleCenter; // 0x9cc            
            // metadata: MNetworkEnable
            bool m_bCanApplyTreeCostume; // 0x9d8            
            // metadata: MNetworkEnable
            bool m_bIsMangoTree; // 0x9d9            
            uint8_t _pad09da[0x6]; // 0x9da
            // m_ParticleList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_ParticleList;
            char m_ParticleList[0x18]; // 0x9e0            
            // metadata: MNetworkEnable
            bool m_bIsPartOfFowSystem; // 0x9f8            
            uint8_t _pad09f9[0xa7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_TempTree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_TempTree) == 0xaa0);
    };
};
