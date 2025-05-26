#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0xb0
        // Has VTable
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CRenderComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x8]; // 0x8
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x10            
            uint8_t _pad0038[0x18]; // 0x38
            bool m_bIsRenderingWithViewModels; // 0x50            
            uint8_t _pad0051[0x3]; // 0x51
            std::uint32_t m_nSplitscreenFlags; // 0x54            
            bool m_bEnableRendering; // 0x58            
            uint8_t _pad0059[0x4f]; // 0x59
            bool m_bInterpolationReadyToDraw; // 0xa8            
            uint8_t _pad00a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRenderComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRenderComponent) == 0xb0);
    };
};
