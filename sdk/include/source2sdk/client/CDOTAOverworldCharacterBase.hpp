#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x28
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldCharacterBase
        {
        public:
            CPanoramaImageName m_sImage; // 0x0            
            CUtlString m_sClassName; // 0x10            
            Vector2D m_vSize; // 0x18            
            std::uint16_t m_unFrameWidth; // 0x20            
            std::uint16_t m_unFrameTime; // 0x22            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_sImage) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_sClassName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_vSize) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_unFrameWidth) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_unFrameTime) == 0x22);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldCharacterBase) == 0x28);
    };
};
