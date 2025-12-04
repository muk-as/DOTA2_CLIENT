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
        struct FeVertexMapDesc_t
        {
        public:
            CUtlString sName; // 0x_            
            std::uint32_t nNameHash; // 0x_            
            std::uint32_t nColor; // 0x_            
            std::uint32_t nFlags; // 0x_            
            std::uint16_t nVertexBase; // 0x_            
            std::uint16_t nVertexCount; // 0x_            
            std::uint32_t nMapOffset; // 0x_            
            std::uint32_t nNodeListOffset; // 0x_            
            Vector vCenterOfMass; // 0x_            
            float flVolumetricSolveStrength; // 0x_            
            std::int16_t nScaleSourceNode; // 0x_            
            std::uint16_t nNodeListCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, sName) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nNameHash) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nColor) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nVertexBase) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nVertexCount) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nMapOffset) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nNodeListOffset) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, vCenterOfMass) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, flVolumetricSolveStrength) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nScaleSourceNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nNodeListCount) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeVertexMapDesc_t) == 0x_);
    };
};
