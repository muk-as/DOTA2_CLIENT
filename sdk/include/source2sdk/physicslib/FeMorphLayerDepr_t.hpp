#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeMorphLayerDepr_t
        {
        public:
            CUtlString m_Name; // 0x_            
            std::uint32_t m_nNameHash; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Nodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_Nodes;
            char m_Nodes[0x_]; // 0x_            
            // m_InitPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_InitPos;
            char m_InitPos[0x_]; // 0x_            
            // m_Gravity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_Gravity;
            char m_Gravity[0x_]; // 0x_            
            // m_GoalStrength has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_GoalStrength;
            char m_GoalStrength[0x_]; // 0x_            
            // m_GoalDamping has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_GoalDamping;
            char m_GoalDamping[0x_]; // 0x_            
            std::uint32_t m_nFlags; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeMorphLayerDepr_t, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeMorphLayerDepr_t, m_nNameHash) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeMorphLayerDepr_t, m_Nodes) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeMorphLayerDepr_t, m_InitPos) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeMorphLayerDepr_t, m_Gravity) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeMorphLayerDepr_t, m_GoalStrength) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeMorphLayerDepr_t, m_GoalDamping) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeMorphLayerDepr_t, m_nFlags) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeMorphLayerDepr_t) == 0x_);
    };
};
