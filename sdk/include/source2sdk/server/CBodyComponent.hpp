#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CGameSceneNode;
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct disallowed
        #pragma pack(push, 1)
        class CBodyComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            source2sdk::server::CGameSceneNode* m_pSceneNode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBodyComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBodyComponent) == 0x_);
    };
};
