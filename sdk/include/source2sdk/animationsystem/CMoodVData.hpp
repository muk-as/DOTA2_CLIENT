#pragma once
#include "source2sdk/animationsystem/MoodAnimationLayer_t.hpp"
#include "source2sdk/animationsystem/MoodType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x100
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    // static metadata: MVDataOverlayType "1"
    #pragma pack(push, 1)
    class CMoodVData
    {
    public:
        // metadata: MPropertyDescription "Model to get the animation list from"
        // metadata: MPropertyAutoRebuildOnChange
        // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
        char m_sModelName[0xe0]; // 0x0        
        // metadata: MPropertyDescription "Type of mood"
        animationsystem::MoodType_t m_nMoodType; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x4]; // 0xe4
        // metadata: MPropertyDescription "Layers for this mood"
        // m_animationLayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::MoodAnimationLayer_t> m_animationLayers;
        char m_animationLayers[0x18]; // 0xe8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMoodVData, m_sModelName) == 0x0);
    static_assert(offsetof(CMoodVData, m_nMoodType) == 0xe0);
    static_assert(offsetof(CMoodVData, m_animationLayers) == 0xe8);
    
    static_assert(sizeof(CMoodVData) == 0x100);
};
