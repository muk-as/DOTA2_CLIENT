#pragma once
#include "source2sdk/client/C_SceneEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTASceneEntity : public client::C_SceneEntity
    {
    public:
        int32_t m_nCustomStackIndex; // 0x598        
        float m_flVolume; // 0x59c        
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTASceneEntity because it is not a standard-layout class
    static_assert(sizeof(C_DOTASceneEntity) == 0x5a8);
};
