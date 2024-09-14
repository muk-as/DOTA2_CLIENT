#pragma once
#include "source2sdk/animlib/CNmRootMotionData.hpp"
#include "source2sdk/animlib/CNmSyncTrack.hpp"
#include "source2sdk/animlib/NmCompressionSettings_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x1b0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmClip
    {
    public:
        // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
        char m_skeleton[0x8]; // 0x0        
        uint32_t m_nNumFrames; // 0x8        
        float m_flDuration; // 0xc        
        CUtlBinaryBlock m_compressedPoseData; // 0x10        
        // m_trackCompressionSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animlib::NmCompressionSettings_t> m_trackCompressionSettings;
        char m_trackCompressionSettings[0x18]; // 0x28        
        // m_compressedPoseOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_compressedPoseOffsets;
        char m_compressedPoseOffsets[0x18]; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x58[0x48]; // 0x58
        animlib::CNmSyncTrack m_syncTrack; // 0xa0        
        animlib::CNmRootMotionData m_rootMotion; // 0x150        
        bool m_bIsAdditive; // 0x1a0        
        [[maybe_unused]] std::uint8_t pad_0x1a1[0xf];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmClip, m_skeleton) == 0x0);
    static_assert(offsetof(CNmClip, m_nNumFrames) == 0x8);
    static_assert(offsetof(CNmClip, m_flDuration) == 0xc);
    static_assert(offsetof(CNmClip, m_compressedPoseData) == 0x10);
    static_assert(offsetof(CNmClip, m_trackCompressionSettings) == 0x28);
    static_assert(offsetof(CNmClip, m_compressedPoseOffsets) == 0x40);
    static_assert(offsetof(CNmClip, m_syncTrack) == 0xa0);
    static_assert(offsetof(CNmClip, m_rootMotion) == 0x150);
    static_assert(offsetof(CNmClip, m_bIsAdditive) == 0x1a0);
    
    static_assert(sizeof(CNmClip) == 0x1b0);
};
