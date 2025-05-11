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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeSDFRigid_t
        {
        public:
            Vector vLocalMin; // 0x0            
            Vector vLocalMax; // 0xc            
            float flBounciness; // 0x18            
            std::uint16_t nNode; // 0x1c            
            std::uint16_t nCollisionMask; // 0x1e            
            std::uint16_t nVertexMapIndex; // 0x20            
            std::uint16_t nFlags; // 0x22            
            uint8_t _pad0024[0x4]; // 0x24
            // m_Distances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_Distances;
            char m_Distances[0x18]; // 0x28            
            std::int32_t m_nWidth; // 0x40            
            std::int32_t m_nHeight; // 0x44            
            std::int32_t m_nDepth; // 0x48            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, vLocalMin) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, vLocalMax) == 0xc);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, flBounciness) == 0x18);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, nNode) == 0x1c);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, nCollisionMask) == 0x1e);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, nVertexMapIndex) == 0x20);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, nFlags) == 0x22);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, m_Distances) == 0x28);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, m_nWidth) == 0x40);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, m_nHeight) == 0x44);
        static_assert(offsetof(source2sdk::physicslib::FeSDFRigid_t, m_nDepth) == 0x48);
        
        static_assert(sizeof(source2sdk::physicslib::FeSDFRigid_t) == 0x50);
    };
};
