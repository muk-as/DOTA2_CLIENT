#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimNodePath.hpp"
#include "source2sdk/animgraphlib/WeightList.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRagdollComponentUpdater : public source2sdk::animgraphlib::CAnimComponentUpdater
        {
        public:
            // m_ragdollNodePaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimNodePath> m_ragdollNodePaths;
            char m_ragdollNodePaths[0x_]; // 0x_            
            // m_followAttachmentNodePaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimNodePath> m_followAttachmentNodePaths;
            char m_followAttachmentNodePaths[0x_]; // 0x_            
            // m_boneIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_boneIndices;
            char m_boneIndices[0x_]; // 0x_            
            // m_boneNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_boneNames;
            char m_boneNames[0x_]; // 0x_            
            // m_weightLists has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::WeightList> m_weightLists;
            char m_weightLists[0x_]; // 0x_            
            // m_boneToWeightIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_boneToWeightIndices;
            char m_boneToWeightIndices[0x_]; // 0x_            
            float m_flSpringFrequencyMin; // 0x_            
            float m_flSpringFrequencyMax; // 0x_            
            float m_flMaxStretch; // 0x_            
            bool m_bSolidCollisionAtZeroWeight; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollComponentUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CRagdollComponentUpdater) == 0x_);
    };
};
