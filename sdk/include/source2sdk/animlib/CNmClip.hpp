#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmRootMotionData.hpp"
#include "source2sdk/animlib/CNmSyncTrack.hpp"
#include "source2sdk/animlib/NmCompressionSettings_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
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
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x8]; // 0x0            
            std::uint32_t m_nNumFrames; // 0x8            
            float m_flDuration; // 0xc            
            CUtlBinaryBlock m_compressedPoseData; // 0x10            
            // m_trackCompressionSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::NmCompressionSettings_t> m_trackCompressionSettings;
            char m_trackCompressionSettings[0x18]; // 0x28            
            // m_compressedPoseOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_compressedPoseOffsets;
            char m_compressedPoseOffsets[0x18]; // 0x40            
            uint8_t _pad0058[0x28]; // 0x58
            // m_secondaryAnimations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<source2sdk::animlib::CNmClip*,1> m_secondaryAnimations;
            char m_secondaryAnimations[0x20]; // 0x80            
            source2sdk::animlib::CNmSyncTrack m_syncTrack; // 0xa0            
            source2sdk::animlib::CNmRootMotionData m_rootMotion; // 0x150            
            bool m_bIsAdditive; // 0x1a0            
            uint8_t _pad01a1[0xf];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_skeleton) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_nNumFrames) == 0x8);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_flDuration) == 0xc);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_compressedPoseData) == 0x10);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_trackCompressionSettings) == 0x28);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_compressedPoseOffsets) == 0x40);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_secondaryAnimations) == 0x80);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_syncTrack) == 0xa0);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_rootMotion) == 0x150);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_bIsAdditive) == 0x1a0);
        
        static_assert(sizeof(source2sdk::animlib::CNmClip) == 0x1b0);
    };
};
