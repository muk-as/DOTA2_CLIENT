#pragma once
#include "source2sdk/client/CDOTACrownfallCreditsMapSceneAnimateableDefinition.hpp"
#include "source2sdk/client/CrownfallCreditsAABB_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x68
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDOTACrownfallCreditsMapSceneDefinition
    {
    public:
        CPanoramaImageName m_strImage; // 0x0        
        CPanoramaImageName m_strImageMask; // 0x10        
        Vector2D m_vViewStart; // 0x20        
        Vector2D m_vViewEnd; // 0x28        
        client::CrownfallCreditsAABB_t m_bounds; // 0x30        
        int32_t m_nAnimOffsetX; // 0x40        
        int32_t m_nAnimOffsetY; // 0x44        
        // m_vecAnimations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTACrownfallCreditsMapSceneAnimateableDefinition> m_vecAnimations;
        char m_vecAnimations[0x18]; // 0x48        
        bool m_bScale; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x61[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTACrownfallCreditsMapSceneDefinition, m_strImage) == 0x0);
    static_assert(offsetof(CDOTACrownfallCreditsMapSceneDefinition, m_strImageMask) == 0x10);
    static_assert(offsetof(CDOTACrownfallCreditsMapSceneDefinition, m_vViewStart) == 0x20);
    static_assert(offsetof(CDOTACrownfallCreditsMapSceneDefinition, m_vViewEnd) == 0x28);
    static_assert(offsetof(CDOTACrownfallCreditsMapSceneDefinition, m_bounds) == 0x30);
    static_assert(offsetof(CDOTACrownfallCreditsMapSceneDefinition, m_nAnimOffsetX) == 0x40);
    static_assert(offsetof(CDOTACrownfallCreditsMapSceneDefinition, m_nAnimOffsetY) == 0x44);
    static_assert(offsetof(CDOTACrownfallCreditsMapSceneDefinition, m_vecAnimations) == 0x48);
    static_assert(offsetof(CDOTACrownfallCreditsMapSceneDefinition, m_bScale) == 0x60);
    
    static_assert(sizeof(CDOTACrownfallCreditsMapSceneDefinition) == 0x68);
};
