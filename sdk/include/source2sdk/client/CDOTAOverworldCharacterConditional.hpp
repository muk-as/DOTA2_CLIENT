#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EOverworldCharacterVisibility.hpp"
#include "source2sdk/client/OverworldNodeID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldCharacterConditional
        {
        public:
            source2sdk::client::EOverworldCharacterVisibility m_eConditionFlags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::OverworldNodeID_t> m_vecNodes;
            char m_vecNodes[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterConditional, m_eConditionFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterConditional, m_vecNodes) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldCharacterConditional) == 0x_);
    };
};
