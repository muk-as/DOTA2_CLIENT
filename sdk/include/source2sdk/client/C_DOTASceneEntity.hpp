#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_SceneEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x650
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTASceneEntity : public source2sdk::client::C_SceneEntity
        {
        public:
            std::int32_t m_nCustomStackIndex; // 0x640            
            float m_flVolume; // 0x644            
            uint8_t _pad0648[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTASceneEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTASceneEntity) == 0x650);
    };
};
