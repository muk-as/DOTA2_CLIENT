#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CGameSceneNode;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x78
        // Has VTable
        // Construct disallowed
        #pragma pack(push, 1)
        class CBodyComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            source2sdk::client::CGameSceneNode* m_pSceneNode; // 0x8            
            uint8_t _pad0010[0x38]; // 0x10
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x48            
            uint8_t _pad0070[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBodyComponent) == 0x78);
    };
};
