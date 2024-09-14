#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/EntityDisolveType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x820
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flFadeInStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeInLength"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutModelStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutModelLength"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutStart"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutLength"
    // static metadata: MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
    // static metadata: MNetworkVarNames "Vector m_vDissolverOrigin"
    // static metadata: MNetworkVarNames "uint32 m_nMagnitude"
    #pragma pack(push, 1)
    class C_EntityDissolve : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7d8[0x8]; // 0x7d8
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x7e0        
        // metadata: MNetworkEnable
        float m_flFadeInStart; // 0x7e4        
        // metadata: MNetworkEnable
        float m_flFadeInLength; // 0x7e8        
        // metadata: MNetworkEnable
        float m_flFadeOutModelStart; // 0x7ec        
        // metadata: MNetworkEnable
        float m_flFadeOutModelLength; // 0x7f0        
        // metadata: MNetworkEnable
        float m_flFadeOutStart; // 0x7f4        
        // metadata: MNetworkEnable
        float m_flFadeOutLength; // 0x7f8        
        entity2::GameTime_t m_flNextSparkTime; // 0x7fc        
        // metadata: MNetworkEnable
        client::EntityDisolveType_t m_nDissolveType; // 0x800        
        // metadata: MNetworkEnable
        Vector m_vDissolverOrigin; // 0x804        
        // metadata: MNetworkEnable
        uint32_t m_nMagnitude; // 0x810        
        bool m_bCoreExplode; // 0x814        
        bool m_bLinkedToServerEnt; // 0x815        
        [[maybe_unused]] std::uint8_t pad_0x816[0xa];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EntityDissolve because it is not a standard-layout class
    static_assert(sizeof(C_EntityDissolve) == 0x820);
};
