#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmClip_ModelSpaceSamplingChainLink_t.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmClip
        {
        public:
            // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x_]; // 0x_            
            std::uint32_t m_nNumFrames; // 0x_            
            float m_flDuration; // 0x_            
            CUtlBinaryBlock m_compressedPoseData; // 0x_            
            // m_trackCompressionSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::NmCompressionSettings_t> m_trackCompressionSettings;
            char m_trackCompressionSettings[0x_]; // 0x_            
            // m_compressedPoseOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_compressedPoseOffsets;
            char m_compressedPoseOffsets[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_secondaryAnimations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<source2sdk::animlib::CNmClip*,1> m_secondaryAnimations;
            char m_secondaryAnimations[0x_]; // 0x_            
            source2sdk::animlib::CNmSyncTrack m_syncTrack; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animlib::CNmRootMotionData m_rootMotion; // 0x_            
            bool m_bIsAdditive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_modelSpaceSamplingChain has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmClip_ModelSpaceSamplingChainLink_t> m_modelSpaceSamplingChain;
            char m_modelSpaceSamplingChain[0x_]; // 0x_            
            // m_modelSpaceBoneSamplingIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_modelSpaceBoneSamplingIndices;
            char m_modelSpaceBoneSamplingIndices[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_skeleton) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_nNumFrames) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_compressedPoseData) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_trackCompressionSettings) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_compressedPoseOffsets) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_secondaryAnimations) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_syncTrack) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_rootMotion) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_bIsAdditive) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_modelSpaceSamplingChain) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_modelSpaceBoneSamplingIndices) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmClip) == 0x_);
    };
};
