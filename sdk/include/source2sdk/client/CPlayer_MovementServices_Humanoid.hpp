#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_MovementServices.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x280
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_flFallVelocity"
        // static metadata: MNetworkVarNames "bool m_bInCrouch"
        // static metadata: MNetworkVarNames "uint32 m_nCrouchState"
        // static metadata: MNetworkVarNames "GameTime_t m_flCrouchTransitionStartTime"
        // static metadata: MNetworkVarNames "bool m_bDucked"
        // static metadata: MNetworkVarNames "bool m_bDucking"
        // static metadata: MNetworkVarNames "bool m_bInDuckJump"
        #pragma pack(push, 1)
        class CPlayer_MovementServices_Humanoid : public source2sdk::client::CPlayer_MovementServices
        {
        public:
            float m_flStepSoundTime; // 0x240            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "17"
            // metadata: MNetworkMinValue "-4096,000000"
            // metadata: MNetworkMaxValue "4096,000000"
            // metadata: MNetworkEncodeFlags "4"
            float m_flFallVelocity; // 0x244            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInCrouch; // 0x248            
            uint8_t _pad0249[0x3]; // 0x249
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_nCrouchState; // 0x24c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flCrouchTransitionStartTime; // 0x250            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bDucked; // 0x254            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bDucking; // 0x255            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInDuckJump; // 0x256            
            uint8_t _pad0257[0x1]; // 0x257
            Vector m_groundNormal; // 0x258            
            float m_flSurfaceFriction; // 0x264            
            CUtlStringToken m_surfaceProps; // 0x268            
            uint8_t _pad026c[0xc]; // 0x26c
            std::int32_t m_nStepside; // 0x278            
            uint8_t _pad027c[0x4];
            
            // Datamap fields:
            // void m_pSurfaceData; // 0x270
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_MovementServices_Humanoid because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayer_MovementServices_Humanoid) == 0x280);
    };
};
