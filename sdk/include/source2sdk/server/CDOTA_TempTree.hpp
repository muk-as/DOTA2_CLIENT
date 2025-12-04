#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"

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
        // static metadata: MNetworkVarNames "Vector m_vecTreeCircleCenter"
        // static metadata: MNetworkVarNames "bool m_bCanApplyTreeCostume"
        // static metadata: MNetworkVarNames "bool m_bIsMangoTree"
        // static metadata: MNetworkVarNames "bool m_bIsPartOfFowSystem"
        #pragma pack(push, 1)
        class CDOTA_TempTree : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_fExpireTime; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vecTreeCircleCenter; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanApplyTreeCostume; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsMangoTree; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_ParticleList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_ParticleList;
            char m_ParticleList[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsPartOfFowSystem; // 0x_            
            bool m_bForceVisible[15]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_TempTree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_TempTree) == 0x_);
    };
};
