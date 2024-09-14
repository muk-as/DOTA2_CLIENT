#pragma once
#include "source2sdk/client/CPlayer_MovementServices.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x218
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float32 m_flFallVelocity"
    // static metadata: MNetworkVarNames "bool m_bInCrouch"
    // static metadata: MNetworkVarNames "uint32 m_nCrouchState"
    // static metadata: MNetworkVarNames "GameTime_t m_flCrouchTransitionStartTime"
    // static metadata: MNetworkVarNames "bool m_bDucked"
    // static metadata: MNetworkVarNames "bool m_bDucking"
    // static metadata: MNetworkVarNames "bool m_bInDuckJump"
    #pragma pack(push, 1)
    class CPlayer_MovementServices_Humanoid : public client::CPlayer_MovementServices
    {
    public:
        float m_flStepSoundTime; // 0x1d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkBitCount "17"
        // metadata: MNetworkMinValue "-4096,000000"
        // metadata: MNetworkMaxValue "4096,000000"
        // metadata: MNetworkEncodeFlags "4"
        float m_flFallVelocity; // 0x1dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInCrouch; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e1[0x3]; // 0x1e1
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nCrouchState; // 0x1e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flCrouchTransitionStartTime; // 0x1e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bDucked; // 0x1ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bDucking; // 0x1ed        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInDuckJump; // 0x1ee        
        [[maybe_unused]] std::uint8_t pad_0x1ef[0x1]; // 0x1ef
        Vector m_groundNormal; // 0x1f0        
        float m_flSurfaceFriction; // 0x1fc        
        CUtlStringToken m_surfaceProps; // 0x200        
        [[maybe_unused]] std::uint8_t pad_0x204[0xc]; // 0x204
        int32_t m_nStepside; // 0x210        
        [[maybe_unused]] std::uint8_t pad_0x214[0x4];
        
        // Datamap fields:
        // void m_pSurfaceData; // 0x208
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayer_MovementServices_Humanoid because it is not a standard-layout class
    static_assert(sizeof(CPlayer_MovementServices_Humanoid) == 0x218);
};
