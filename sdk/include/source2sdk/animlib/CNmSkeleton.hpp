#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmSkeleton_SecondarySkeleton_t.hpp"
#include "source2sdk/animlib/NmBoneMaskSetDefinition_t.hpp"

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
        class CNmSkeleton
        {
        public:
            CGlobalSymbol m_ID; // 0x_            
            // m_boneIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<CGlobalSymbol> m_boneIDs;
            char m_boneIDs[0x_]; // 0x_            
            // m_parentIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_parentIndices;
            char m_parentIndices[0x_]; // 0x_            
            // m_parentSpaceReferencePose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_parentSpaceReferencePose;
            char m_parentSpaceReferencePose[0x_]; // 0x_            
            // m_modelSpaceReferencePose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_modelSpaceReferencePose;
            char m_modelSpaceReferencePose[0x_]; // 0x_            
            std::int32_t m_numBonesToSampleAtLowLOD; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_maskDefinitions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::animlib::NmBoneMaskSetDefinition_t> m_maskDefinitions;
            char m_maskDefinitions[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_secondarySkeletons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::animlib::CNmSkeleton_SecondarySkeleton_t> m_secondarySkeletons;
            char m_secondarySkeletons[0x_]; // 0x_            
            bool m_bIsPropSkeleton; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton, m_ID) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton, m_boneIDs) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton, m_parentIndices) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton, m_parentSpaceReferencePose) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton, m_modelSpaceReferencePose) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton, m_numBonesToSampleAtLowLOD) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton, m_maskDefinitions) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton, m_secondarySkeletons) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSkeleton, m_bIsPropSkeleton) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmSkeleton) == 0x_);
    };
};
