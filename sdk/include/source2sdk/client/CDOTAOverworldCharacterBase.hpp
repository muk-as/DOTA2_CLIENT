#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"

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
        class CDOTAOverworldCharacterBase
        {
        public:
            CPanoramaImageName m_sImage; // 0x_            
            CUtlString m_sClassName; // 0x_            
            Vector2D m_vSize; // 0x_            
            Vector2D m_vOffset; // 0x_            
            std::uint16_t m_unFrameWidth; // 0x_            
            std::uint16_t m_unFrameTime; // 0x_            
            bool bUse3dPreview; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::HeroID_t m_nPreviewHeroID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_sImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_sClassName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_vSize) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_vOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_unFrameWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_unFrameTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, bUse3dPreview) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_nPreviewHeroID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldCharacterBase) == 0x_);
    };
};
