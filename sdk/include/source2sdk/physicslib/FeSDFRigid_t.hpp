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
        struct FeSDFRigid_t
        {
        public:
            Vector vLocalMin; // 0x_            
            Vector vLocalMax; // 0x_            
            float flBounciness; // 0x_            
            std::uint16_t nNode; // 0x_            
            std::uint16_t nCollisionMask; // 0x_            
            std::uint16_t nVertexMapIndex; // 0x_            
            std::uint16_t nFlags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Distances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_Distances;
            char m_Distances[0x_]; // 0x_            
            std::int32_t m_nWidth; // 0x_            
            std::int32_t m_nHeight; // 0x_            
            std::int32_t m_nDepth; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, vLocalMin) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, vLocalMax) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, flBounciness) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, nNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, nCollisionMask) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, nVertexMapIndex) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, nFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, m_Distances) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, m_nWidth) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, m_nHeight) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, m_nDepth) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeSDFRigid_t) == 0x_);
    };
};
