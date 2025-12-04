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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            float m_flStepSoundTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "17"
            // metadata: MNetworkMinValue "-4096,000000"
            // metadata: MNetworkMaxValue "4096,000000"
            // metadata: MNetworkEncodeFlags "4"
            float m_flFallVelocity; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInCrouch; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_nCrouchState; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flCrouchTransitionStartTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bDucked; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bDucking; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInDuckJump; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_groundNormal; // 0x_            
            float m_flSurfaceFriction; // 0x_            
            CUtlStringToken m_surfaceProps; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nStepside; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pSurfaceData; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_MovementServices_Humanoid because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayer_MovementServices_Humanoid) == 0x_);
    };
};
