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
        // Size: 0xac8
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
            uint8_t _pad09c0[0x30]; // 0x9c0
            source2sdk::entity2::GameTime_t m_fExpireTime; // 0x9f0            
            // metadata: MNetworkEnable
            Vector m_vecTreeCircleCenter; // 0x9f4            
            // metadata: MNetworkEnable
            bool m_bCanApplyTreeCostume; // 0xa00            
            // metadata: MNetworkEnable
            bool m_bIsMangoTree; // 0xa01            
            uint8_t _pad0a02[0x6]; // 0xa02
            // m_ParticleList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_ParticleList;
            char m_ParticleList[0x18]; // 0xa08            
            // metadata: MNetworkEnable
            bool m_bIsPartOfFowSystem; // 0xa20            
            uint8_t _pad0a21[0xa7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_TempTree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_TempTree) == 0xac8);
    };
};
