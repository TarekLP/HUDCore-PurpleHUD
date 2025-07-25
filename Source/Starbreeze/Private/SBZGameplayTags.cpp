#include "SBZGameplayTags.h"

USBZGameplayTags::USBZGameplayTags() {
    SetupTag("Character.Action.IsCrouching");
    SetupTag("Character.Action.IsJumping");
    SetupTag("Character.Action.IsInAir");
    SetupTag("Character.Action.IsOnGround");
    SetupTag("Character.Action.IsRunning");
    SetupTag("Character.Action.IsRunningQueued");
    SetupTag("Character.Action.IsRunningExit");
    SetupTag("Character.Action.IsTargeting");
    SetupTag("Character.Action.IsTargetingQueued");
    SetupTag("Character.Action.IsHandlingEquipment");
    SetupTag("Character.Action.IsHandlingEquipmentInput");
    SetupTag("Character.Action.IsHandlingPlaceable");
    SetupTag("Character.Action.IsHandlingPlaceable.Consumable");
    SetupTag("Character.Action.IsHandlingPlaceableQueued");
    SetupTag("Character.Action.IsEquipping");
    SetupTag("Character.Action.IsFiring");
    SetupTag("Character.Action.IsFiring.Projectile");
    SetupTag("Character.Action.IsFiringTaser");
    SetupTag("Character.Action.IsFiringQueued");
    SetupTag("Character.Action.IsBuildupFiring");
    SetupTag("Character.Action.IsCasing");
    SetupTag("Character.Action.FirstResponder");
    SetupTag("Character.Action.IsReloading");
    SetupTag("Character.Action.IsReloading.Normal");
    SetupTag("Character.Action.IsReloading.EndCycle");
    SetupTag("Character.Action.IsShouting");
    SetupTag("Character.Action.IsInteracting");
    SetupTag("Character.Action.Defeat");
    SetupTag("Character.Action.Defeat.Tased");
    SetupTag("Character.Action.Defeat.Tased.Gently");
    SetupTag("Character.Action.Defeat.Tased.Uncontrolled");
    SetupTag("Character.Action.Defeat.Cuffed");
    SetupTag("Character.Action.Defeat.Subdued");
    SetupTag("Character.Action.Defeat.Downed");
    SetupTag("Character.Action.Defeat.BleedOut");
    SetupTag("Character.Action.IsThrowing");
    SetupTag("Character.Action.IsThrowing.Item");
    SetupTag("Character.Action.IsPlacing");
    SetupTag("Character.Action.IsTraversing");
    SetupTag("Character.Action.IsSliding");
    SetupTag("Character.Action.IsDownOnTheGround");
    SetupTag("Character.Action.IsHogTied");
    SetupTag("Character.Action.IsFollowing");
    SetupTag("Character.Action.IsCarrying");
    SetupTag("Character.Action.IsInvestigating");
    SetupTag("Character.Action.MiniGame");
    SetupTag("Character.Action.IsLanding");
    SetupTag("Character.Action.IsMeleeing");
    SetupTag("Character.Action.IsMeleeing.ThePunch");
    SetupTag("Character.Action.IsMeleeing.ThePunch.Heavy");
    SetupTag("Character.Action.IsShoving.HumanShield");
    SetupTag("Character.Action.IsKilling.HumanShield");
    SetupTag("Character.Action.IsMaskOnInput");
    SetupTag("Character.Action.IsMaskOn");
    SetupTag("Character.Action.IsBeingEscorted");
    SetupTag("Character.Action.IsBeingArrested");
    SetupTag("Character.Action.IsViewing");
    SetupTag("Character.Action.IsHumanShieldInstigator");
    SetupTag("Character.Action.IsHumanShieldVictim");
    SetupTag("Character.Action.EscortSelected");
    SetupTag("Character.Action.IsEscorting");
    SetupTag("Character.Action.IsArresting");
    SetupTag("Character.Action.IsDoingAgility");
    SetupTag("Character.Action.IsToolUnequipping");
    SetupTag("Character.Action.IsZiplining");
    SetupTag("Character.Action.IsDisengaging");
    SetupTag("Character.Action.Tool");
    SetupTag("Character.Action.Tool.IsBeingUsed");
    SetupTag("Character.Action.Tool.Place");
    SetupTag("Character.Action.Tool.Place.MicroCamera");
    SetupTag("Character.Action.Tool.Place.CuttingTool");
    SetupTag("Character.Action.Tool.Place.TripMine");
    SetupTag("Character.Action.Tool.Place.SensorTool");
    SetupTag("Character.Action.Tool.Place.ECMJammer");
    SetupTag("Character.Action.Tool.Place.Tripper");
    SetupTag("Character.Action.Tool.Primary");
    SetupTag("Character.Action.Tool.Primary.Activated");
    SetupTag("Character.Action.Tool.Primary.PeekMicroCamera");
    SetupTag("Character.Action.Tool.Primary.HackingTool");
    SetupTag("Character.Action.Tool.Primary.CuttingTool");
    SetupTag("Character.Action.Tool.Primary.SensorTool");
    SetupTag("Character.Action.Tool.Primary.Phone");
    SetupTag("Character.Action.Tool.Primary.Phone.Usable");
    SetupTag("Character.Action.RequestOVK");
    SetupTag("Character.Action.RequestOVK.ThePunch");
    SetupTag("Character.Action.RequestOVK.OverkillWeapon");
    SetupTag("Character.Action.RequestOVK.Operator");
    SetupTag("Character.Action.TickOverskill");
    SetupTag("Character.Action.TickOverskill.Operator");
    SetupTag("Character.Action.TickOverskill.ThePunch");
    SetupTag("Character.Action.MonitoringSecurityFeed");
    SetupTag("Character.Action.CoveringForAlly");
    SetupTag("Character.Action.Surrendered");
    SetupTag("Character.Action.IsSurrendering");
    SetupTag("Character.Action.Distracted");
    SetupTag("Character.Action.StayAndHide");
    SetupTag("Character.Action.Revive");
    SetupTag("Character.Action.PlayingUninterruptibleLifeAction");
    SetupTag("Character.Action.LifeAction");
    SetupTag("Character.Action.Disguised");
    SetupTag("Character.Action.Ambushing");
    SetupTag("Character.Action.IsSteppingOut");
    SetupTag("Character.Action.IsTackling.Running");
    SetupTag("Character.Action.IsTackling.BatteringRam");
    SetupTag("Character.Action.Hacker.SecuredLoop");
    SetupTag("Character.Action.Hacker.Overload");
    SetupTag("Character.Action.Hacker.RoutedPing");
    SetupTag("Character.Action.Hacker.HackDrone");
    SetupTag("Character.Action.IsAITacticianCrowdControl");
    SetupTag("Character.Action.AutoCloseDoors");
    SetupTag("Character.Action.ForbidMinePlacing");
    SetupTag("Character.Action.Sabotage");
    SetupTag("Character.Action.StationaryGuard");
    SetupTag("Character.Action.IsAvoidingVehicle");
    SetupTag("Character.Action.IsBeingHitByVehicle");
    SetupTag("Character.Action.IsAnticipatingExplosion");
    SetupTag("Character.Action.ExitPhone");
    SetupTag("Character.Action.IsPlayingAnimatedInteraction");
    SetupTag("Character.Action.IsInspectingEquippable");
    SetupTag("Character.Action.IsTakingHostages");
    SetupTag("Character.Action.IsPlayingEmote");
    SetupTag("Character.Action.IsPlayingThrowBag");
    SetupTag("Character.Action.IsDoingStopAndTurn");
    SetupTag("Character.Action.IsDoingWeaponWallReaction");
    SetupTag("Character.Action.IsDoingWeaponTanking");
    SetupTag("Character.Action.IsPlayingSpawnAnimation");
    SetupTag("Character.Action.UseConsumable");
    SetupTag("Character.Action.PlaceConsumable");
    SetupTag("Character.State.IsRunVelocity");
    SetupTag("Character.State.IsViewDestroyed");
    SetupTag("Character.State.IsFlashed");
    SetupTag("Character.State.IsFlashed.TacticianCrowdControl");
    SetupTag("Character.State.IsGassed.Gas");
    SetupTag("Character.State.IsGassed.Smoke");
    SetupTag("Character.State.IsGassed.Smoke.TacticianCrowdControl");
    SetupTag("Character.State.Stunned");
    SetupTag("Character.State.Stunned.Battery");
    SetupTag("Character.State.Stunned.Mine");
    SetupTag("Character.State.Stunned.ShockGrenade");
    SetupTag("Character.State.IsRunBlocked");
    SetupTag("Character.State.IsSlowed");
    SetupTag("Character.State.IsSlowed.ShockGrenade");
    SetupTag("Character.State.IsStaggered");
    SetupTag("Character.State.IsMarked");
    SetupTag("Character.State.IsHacked");
    SetupTag("Character.State.IsStunned.Sonic");
    SetupTag("Character.State.IsAVehicleObstacle");
    SetupTag("Character.State.IsFocusingOnPath");
    SetupTag("Character.State.Panic");
    SetupTag("Character.State.IsSkillBoosted.AmmoSpecialist.HighGrain");
    SetupTag("Character.State.IsBeingEjectedFromVehicle");
    SetupTag("Character.State.IsHackedByDrone");
    SetupTag("Character.State.TacticianExpose");
    SetupTag("Character.State.IsCloakerCharging");
    SetupTag("Character.State.IsEncumbered");
    SetupTag("Character.State.IsEncumbered.ARGES");
    SetupTag("Character.State.IsEnraged.ThePunch");
    SetupTag("Character.State.IsAttacking");
    SetupTag("Character.State.IsForbidLifeActionCancel");
    SetupTag("Character.State.IsFiringBlocked.Buildup");
    SetupTag("Character.Event.RunExit");
    SetupTag("Character.Event.Landed");
    SetupTag("Character.Event.TargetEquippableChanged");
    SetupTag("Character.Event.Unequipping");
    SetupTag("Character.Event.EquippedCountChanged");
    SetupTag("Character.Event.MaskOn");
    SetupTag("Character.Event.EndCarry");
    SetupTag("Character.Event.EndHumanShield");
    SetupTag("Character.Event.SlideIntoAI");
    SetupTag("Character.Event.Tackle.BatteringRam");
    SetupTag("Character.Event.MoveShieldToBack");
    SetupTag("Character.Event.PickObject");
    SetupTag("Character.Event.ShockAndAweSkill");
    SetupTag("Character.Event.HET5Overskill");
    SetupTag("Character.Type.Heister.Chains");
    SetupTag("Character.Type.Heister.Dallas");
    SetupTag("Character.Type.Heister.Hoxton");
    SetupTag("Character.Type.Heister.Wolf");
    SetupTag("Character.Type.Heister.Joy");
    SetupTag("Character.Type.Heister.Pearl");
    SetupTag("Character.Type.Heister.Empress");
    SetupTag("Character.Type.Heister.Star");
    SetupTag("Character.Type.Heister.Fool");
    SetupTag("EventReaction");
    SetupTag("EventReaction.Death");
    SetupTag("EventReaction.EscapeZone");
    SetupTag("EventReaction.BagTake");
    SetupTag("EventReaction.BagThrown");
    SetupTag("EventReaction.PlayerTased");
    SetupTag("EventReaction.Sabotage");
    SetupTag("EventReaction.HumanShield");
    SetupTag("EventReaction.HumanShield.Ongoing");
    SetupTag("EventReaction.OverkillWeapon");
    SetupTag("EventReaction.ALotOfDeath");
    SetupTag("EventReaction.Grenade");
    SetupTag("EventReaction.DownedBySniper");
    SetupTag("PawnType.Special");
    SetupTag("PawnType.Special.Dozer");
    SetupTag("PawnType.Special.Taser");
    SetupTag("PawnType.Special.Cloaker");
    SetupTag("PawnType.Special.Grenadier");
    SetupTag("PawnType.Special.Tower");
    SetupTag("PawnType.Common.Civilian");
    SetupTag("PawnType.Common.Civilian.Normal");
    SetupTag("PawnType.Common.Civilian.Employee");
    SetupTag("PawnType.Common.Civilian.Insider");
    SetupTag("PawnType.Uncommon.Shield");
    SetupTag("PawnType.Uncommon.Sniper");
    SetupTag("PawnType.Common.Cop");
    SetupTag("PawnType.Common.Cop.FirstResponder");
    SetupTag("PawnType.Common.Cop.Villa");
    SetupTag("PawnType.Common.Cop.Street");
    SetupTag("PawnType.Common.Cop.SMG");
    SetupTag("PawnType.Common.Cop.Shotgun");
    SetupTag("PawnType.Common.Guard");
    SetupTag("PawnType.Common.SWAT");
    SetupTag("PawnType.Common.SWAT.AR");
    SetupTag("PawnType.Common.SWAT.SMG");
    SetupTag("PawnType.Common.SWAT.Shotgun");
    SetupTag("PawnType.Common.SWAT.AR.Heavy");
    SetupTag("PawnType.Common.SWAT.SMG.Heavy");
    SetupTag("PawnType.Common.SWAT.Shotgun.Heavy");
    SetupTag("PawnType.BrainSlug");
    SetupTag("PawnType.CrewAI");
    SetupTag("PawnType.Star.Escort");
    SetupTag("PawnType.NonCharacter");
    SetupTag("PawnType.NonCharacter.SentryGun");
    SetupTag("PawnType.NonCharacter.Drone");
    SetupTag("PawnType.NonCharacter.Drone.Assault");
    SetupTag("PawnType.NonCharacter.Drone.Tactical");
    SetupTag("PawnType.NonCharacter.Drone.Delivery");
    SetupTag("PawnType.NonCharacter.SecurityCamera");
    SetupTag("PawnType.Player");
    SetupTag("SecCam.Alarm");
    SetupTag("SecCam.Investigate");
    SetupTag("SmallTalks.AllowPhoneDialog");
    SetupTag("SmallTalks.AllowSoloDialog");
    SetupTag("SmallTalks.AllowConversationDialog");
    SetupTag("Gate.Locked.Traversable");
    SetupTag("DamageType.Projectile.Bullet");
    SetupTag("DamageType.Projectile.Grenade");
    SetupTag("DamageType.Explosion");
    SetupTag("DamageType.Electric");
    SetupTag("DamageType.Melee");
    SetupTag("DamageType.Melee.Butt");
    SetupTag("DamageType.Melee.ThePunch");
    SetupTag("DamageType.Melee.ThePunch.Light");
    SetupTag("DamageType.Melee.ThePunch.Heavy");
    SetupTag("DamageType.ShoveHumanShield");
    SetupTag("DamageType.Fall");
    SetupTag("DamageType.AgilityBreach");
    SetupTag("DamageType.Knife");
    SetupTag("DamageType.HurtReaction.Explosion");
    SetupTag("DamageType.AOE.HET5");
    SetupTag("Agility.RappellingBreach");
    SetupTag("Item.Keycard");
    SetupTag("AIOrder.Squad");
    SetupTag("AIOrder.Squad.Sabotage");
    SetupTag("AIOrder.Follow");
    SetupTag("AI.Injection.Escort");
    SetupTag("AI.Injection.Squad");
    SetupTag("AI.Despawn");
    SetupTag("AI.LA.Skill.CQCSpecialist.PressurePoint");
    SetupTag("AI.LA.Crew");
    SetupTag("AI.LA.Tower.Hide");
    SetupTag("AI.LA.Escort.ToCover");
    SetupTag("FBI.EndlessAssault");
    SetupTag("FBI.SpecialCapIncrease");
    SetupTag("FBI.CooldownReduction");
    SetupTag("Modifiers.Squad.Sabotage.MaxCount");
    SetupTag("Sound.DoorSlammedOpen");
    SetupTag("Sound.BrokenWindow");
    SetupTag("Sound.BrokenGlass");
    SetupTag("Sound.BrokenDoor");
    SetupTag("Sound.Gunshot");
    SetupTag("Sound.AIGunshot");
    SetupTag("Sound.Drill");
    SetupTag("Sound.FootStep");
    SetupTag("Sound.FootStep.Walk");
    SetupTag("Sound.FootStep.Run");
    SetupTag("Sound.Scream.Security");
    SetupTag("Sound.Scream.Gun");
    SetupTag("Sound.Explosion");
    SetupTag("Sound.AIExplosion");
    SetupTag("Sound.MicroCameraOverloaded");
    SetupTag("Sound.ThrowableProjectileShattered");
    SetupTag("Sound.Lure");
    SetupTag("Touch");
    SetupTag("Touch.Stealth");
    SetupTag("Touch.Search");
    SetupTag("Touch.Private");
    SetupTag("Touch.Secure");
    SetupTag("VisualDetection.Private");
    SetupTag("VisualDetection.Secure");
    SetupTag("VisualDetection.Hostile");
    SetupTag("Weapon.Parts.BarrelExtension.Suppressor");
    SetupTag("Weapon.Visibility.Targeting");
    SetupTag("Weapon.Visibility.MagazineRemoved");
    SetupTag("Weapon.Visibility.Barrel");
    SetupTag("Weapon.Visibility.Chamber");
    SetupTag("Weapon.Visibility.SpeedLoader");
    SetupTag("Weapon.Event.ReloadStateChange");
    SetupTag("Weapon.Family");
    SetupTag("Weapon.Family.AssaultRifle");
    SetupTag("Weapon.Family.AssaultRifle.Standard");
    SetupTag("Weapon.Family.AssaultRifle.Carbine");
    SetupTag("Weapon.Family.AssaultRifle.BattleRifle");
    SetupTag("Weapon.Family.SMG");
    SetupTag("Weapon.Family.SMG.Standard");
    SetupTag("Weapon.Family.SMG.MachinePistol");
    SetupTag("Weapon.Family.SMG.PDW");
    SetupTag("Weapon.Family.Shotgun");
    SetupTag("Weapon.Family.BreakAction");
    SetupTag("Weapon.Family.Shotgun.PumpAction");
    SetupTag("Weapon.Family.AutoFeed");
    SetupTag("Weapon.Family.Marksman");
    SetupTag("Weapon.Family.Marksman.DMR");
    SetupTag("Weapon.Family.Marksman.BoltAction");
    SetupTag("Weapon.Family.Marksman.SPR");
    SetupTag("Weapon.Family.MachineGun");
    SetupTag("Weapon.Family.MachineGun.LMG");
    SetupTag("Weapon.Family.MachineGun.HMG");
    SetupTag("Weapon.Family.MachineGun.IAR");
    SetupTag("Weapon.Family.Sidearm");
    SetupTag("Weapon.Family.Sidearm.Pistol");
    SetupTag("Weapon.Family.Sidearm.Revolver");
    SetupTag("Weapon.Family.Sidearm.HandCannon");
    SetupTag("Weapon.Family.Overkill");
    SetupTag("Weapon.Family.Overkill.Mamba");
    SetupTag("Weapon.Family.Overkill.HET5");
    SetupTag("Weapon.Family.Overkill.ARGES");
    SetupTag("Weapon.Family.Overkill.ThePunch");
    SetupTag("Player.Event.TryShout");
    SetupTag("Player.Tased.Weapon.Fireable");
    SetupTag("Playstyle.Category.Loud");
    SetupTag("Playstyle.Category.Stealth");
    SetupTag("Skill.Hacker.Base");
    SetupTag("Skill.Hacker.AcedBase");
    SetupTag("Skill.Hacker.Upgrade01");
    SetupTag("Skill.Hacker.Upgrade02");
    SetupTag("Skill.Hacker.Mastery01");
    SetupTag("Skill.MicroCamera.Base");
    SetupTag("Skill.MicroCamera.AcedBase");
    SetupTag("Skill.MicroCamera.Upgrade01");
    SetupTag("Skill.MicroCamera.Upgrade02");
    SetupTag("Skill.MicroCamera.Upgrade03");
    SetupTag("Skill.MicroCamera.Mastery01");
    SetupTag("Skill.Cutter.Base");
    SetupTag("Skill.Cutter.AcedBase");
    SetupTag("Skill.Cutter.Upgrade01");
    SetupTag("Skill.Cutter.Upgrade02");
    SetupTag("Skill.Cutter.Upgrade03");
    SetupTag("Skill.Cutter.Mastery01");
    SetupTag("Skill.Sharpshooter.Sharpshooter");
    SetupTag("Skill.Sharpshooter.SharpshooterAced");
    SetupTag("Skill.Sharpshooter.SpeedAim");
    SetupTag("Skill.Sharpshooter.CollateralControl");
    SetupTag("Skill.Sharpshooter.LongShot");
    SetupTag("Skill.Sharpshooter.PrecisionShot");
    SetupTag("Skill.Sharpshooter.CuttingShot");
    SetupTag("Skill.Sharpshooter.AmmoReplenisher");
    SetupTag("Skill.AmmoSpecialist.AmmoSpecialist");
    SetupTag("Skill.AmmoSpecialist.AmmoSpecialistAced");
    SetupTag("Skill.AmmoSpecialist.TopUp");
    SetupTag("Skill.AmmoSpecialist.Scrounger");
    SetupTag("Skill.AmmoSpecialist.FullyLoaded");
    SetupTag("Skill.AmmoSpecialist.PlateUp");
    SetupTag("Skill.AmmoSpecialist.HighGrain");
    SetupTag("Skill.AmmoSpecialist.MagThrow");
    SetupTag("Skill.Manipulator.Manipulator");
    SetupTag("Skill.Manipulator.ManipulatorAced");
    SetupTag("Skill.Manipulator.MasterTrader");
    SetupTag("Skill.Manipulator.Overbearing");
    SetupTag("Skill.Manipulator.SilverTongue");
    SetupTag("Skill.Manipulator.Negotiatior");
    SetupTag("Skill.Manipulator.Menacing");
    SetupTag("Skill.Manipulator.StockholmSyndrome");
    SetupTag("Skill.Medic.Medic");
    SetupTag("Skill.Medic.MedicAced");
    SetupTag("Skill.Medic.FieldSurgery");
    SetupTag("Skill.Medic.SteadyHands");
    SetupTag("Skill.Medic.CombatMedic");
    SetupTag("Skill.Medic.ExtraCharge");
    SetupTag("Skill.Medic.CodeBlue");
    SetupTag("Skill.Medic.Triage");
    SetupTag("Skill.Mower.Mower");
    SetupTag("Skill.Mower.MowerAced");
    SetupTag("Skill.Mower.Replenish");
    SetupTag("Skill.Mower.RecoilHandling");
    SetupTag("Skill.Mower.SuppressiveFire");
    SetupTag("Skill.Mower.AmmoFunnel");
    SetupTag("Skill.Mower.SprintLoaded");
    SetupTag("Skill.Demolitionist.Demolitionist");
    SetupTag("Skill.Demolitionist.DemolitionistAced");
    SetupTag("Skill.Demolitionist.ExtraMunitions");
    SetupTag("Skill.Demolitionist.Cooker");
    SetupTag("Skill.Demolitionist.ShellShock");
    SetupTag("Skill.Demolitionist.Blowback");
    SetupTag("Skill.Demolitionist.BlastShield");
    SetupTag("Skill.Demolitionist.Overcooked");
    SetupTag("Skill.Enforcer.Enforcer");
    SetupTag("Skill.Enforcer.EnforcerAced");
    SetupTag("Skill.Enforcer.ShockAndAwe");
    SetupTag("Skill.Enforcer.QuickReload");
    SetupTag("Skill.Enforcer.FaceToFace");
    SetupTag("Skill.Enforcer.Solid");
    SetupTag("Skill.Enforcer.CombatReload");
    SetupTag("Skill.Escapist.Escapist");
    SetupTag("Skill.Escapist.EscapistAced");
    SetupTag("Skill.Escapist.Swift");
    SetupTag("Skill.Escapist.Balanced");
    SetupTag("Skill.Escapist.MoveAndCover");
    SetupTag("Skill.Escapist.SlideTackle");
    SetupTag("Skill.Escapist.BatteringRam");
    SetupTag("Skill.Gunslinger.Gunslinger");
    SetupTag("Skill.Gunslinger.GunslingerAced");
    SetupTag("Skill.Gunslinger.QuickDraw");
    SetupTag("Skill.Gunslinger.FromTheHip");
    SetupTag("Skill.Gunslinger.HeavyHipFire");
    SetupTag("Skill.Gunslinger.Finisher");
    SetupTag("Skill.Gunslinger.AmmoGrabber");
    SetupTag("Skill.Grifter.Grifter");
    SetupTag("Skill.Grifter.GrifterAced");
    SetupTag("Skill.Grifter.Slippery");
    SetupTag("Skill.Grifter.WalkTheWalk");
    SetupTag("Skill.Grifter.SocialEngineering");
    SetupTag("Skill.Grifter.OpenMic");
    SetupTag("Skill.Hacker.Hacker");
    SetupTag("Skill.Hacker.HackerAced");
    SetupTag("Skill.Hacker.SignalCatch");
    SetupTag("Skill.Hacker.SecureLoop");
    SetupTag("Skill.Hacker.ApplianceBreach");
    SetupTag("Skill.Hacker.RoutedPing");
    SetupTag("Skill.Hacker.GlitchProtocol");
    SetupTag("Skill.Infiltrator.Infiltrator");
    SetupTag("Skill.Infiltrator.InfiltratorAced");
    SetupTag("Skill.Infiltrator.FrugalThrower");
    SetupTag("Skill.Infiltrator.QuickFingers");
    SetupTag("Skill.Infiltrator.Retriever");
    SetupTag("Skill.Infiltrator.Bagger");
    SetupTag("Skill.Infiltrator.BladeBouncer");
    SetupTag("Skill.Strategist.Strategist");
    SetupTag("Skill.Strategist.StrategistAced");
    SetupTag("Skill.Strategist.MarkedForDeath");
    SetupTag("Skill.Strategist.CombatMarking");
    SetupTag("Skill.Strategist.ThreatAssessment");
    SetupTag("Skill.Strategist.Misdirect");
    SetupTag("Skill.Engineer.Engineer");
    SetupTag("Skill.Engineer.EngineerAced");
    SetupTag("Skill.Engineer.TargetedFire");
    SetupTag("Skill.Engineer.APTurret");
    SetupTag("Skill.Engineer.CoolingSystem");
    SetupTag("Skill.Engineer.Detonation");
    SetupTag("Skill.Engineer.SpinCycle");
    SetupTag("Skill.Engineer.DualSentries");
    SetupTag("Skill.Tactician.Tactician");
    SetupTag("Skill.Tactician.TacticianAced");
    SetupTag("Skill.Tactician.Scramble");
    SetupTag("Skill.Tactician.CrowdControl");
    SetupTag("Skill.Tactician.CoupDeGrace");
    SetupTag("Skill.Tactician.Discombobulate");
    SetupTag("Skill.Tactician.Expose");
    SetupTag("Skill.Tank.Tank");
    SetupTag("Skill.Tank.TankAced");
    SetupTag("Skill.Tank.Disengage");
    SetupTag("Skill.Tank.Hardy");
    SetupTag("Skill.Tank.ExtraPlates");
    SetupTag("Skill.Tank.ArmorUp");
    SetupTag("Skill.Tank.LastManStanding");
    SetupTag("Skill.Tank.CleanSlate");
    SetupTag("Skill.CQCSpecialist.CQCSpecialist");
    SetupTag("Skill.CQCSpecialist.CQCSpecialistAced");
    SetupTag("Skill.CQCSpecialist.CoverUp");
    SetupTag("Skill.CQCSpecialist.SoftAssets");
    SetupTag("Skill.CQCSpecialist.Groundskeeper");
    SetupTag("Skill.CQCSpecialist.PinPuller");
    SetupTag("Skill.CQCSpecialist.SavageTakedown");
    SetupTag("Skill.CQCSpecialist.PressurePoints");
    SetupTag("Skill.Transporter.Transporter");
    SetupTag("Skill.Transporter.TransporterAced");
    SetupTag("Skill.Transporter.Catapult");
    SetupTag("Skill.Transporter.BeastOfBurden");
    SetupTag("Skill.Transporter.BrutalCarry");
    SetupTag("Skill.Transporter.DeepPockets");
    SetupTag("Skill.Transporter.PowerLifter");
    SetupTag("Skill.Scrambler.Scrambler");
    SetupTag("Skill.Scrambler.ScramblerAced");
    SetupTag("Skill.Scrambler.FullRecall");
    SetupTag("Skill.Scrambler.SpeedHack");
    SetupTag("Skill.Scrambler.SignalScan");
    SetupTag("Skill.Scrambler.ExtraPockets");
    SetupTag("Skill.Scrambler.KineticShortCircuit");
    SetupTag("Skill.Scrambler.CamDistortion");
    SetupTag("Skill.Fortitude.Fortitude");
    SetupTag("Skill.Fortitude.FortitudeAced");
    SetupTag("Skill.Fortitude.ChargedUp");
    SetupTag("Skill.Fortitude.EmpathicHealing");
    SetupTag("Skill.Fortitude.Tenacious");
    SetupTag("Skill.Fortitude.PeakPerformance");
    SetupTag("Skill.Fortitude.WalkingTall");
    SetupTag("Skill.Fortitude.Painkiller");
    SetupTag("Skill.Assassin.Assassin");
    SetupTag("Skill.Assassin.AssassinAced");
    SetupTag("Skill.Assassin.DeathKnell");
    SetupTag("Skill.Assassin.SkimmingTheGround");
    SetupTag("Skill.Assassin.DropCloth");
    SetupTag("Skill.Assassin.DuckAndWeave");
    SetupTag("Skill.Assassin.KillerKinesthetics");
    SetupTag("Skill.Assassin.AssassinsMettle");
    SetupTag("Skill.MambaOverskill.Blue");
    SetupTag("Skill.MambaOverskill.Magenta");
    SetupTag("Skill.MambaOverskill.Azure");
    SetupTag("Skill.MambaOverskill.Turquoise");
    SetupTag("Skill.MambaOverskill.Teal");
    SetupTag("Skill.MambaOverskill.Cyan");
    SetupTag("Skill.ARGESOverskill.Crimson");
    SetupTag("Skill.ARGESOverskill.Scarlet");
    SetupTag("Skill.ARGESOverskill.Vermilion");
    SetupTag("Skill.ARGESOverskill.Alizarin");
    SetupTag("Skill.ARGESOverskill.Rosewood");
    SetupTag("Skill.ARGESOverskill.Burgundy");
    SetupTag("Skill.HetOverskill.Black");
    SetupTag("Skill.HetOverskill.Brown");
    SetupTag("Skill.HetOverskill.Beige");
    SetupTag("Skill.HetOverskill.Burlywood");
    SetupTag("Skill.HetOverskill.Fallow");
    SetupTag("Skill.HetOverskill.Cornsilk");
    SetupTag("Skill.OperatorOverskill.Red");
    SetupTag("Skill.OperatorOverskill.Blue");
    SetupTag("Skill.OperatorOverskill.Green");
    SetupTag("Skill.OperatorOverskill.Purple");
    SetupTag("Skill.OperatorOverskill.Yellow");
    SetupTag("Skill.OperatorOverskill.White");
    SetupTag("Skill.ThePunchOverskill.Violet");
    SetupTag("Skill.ThePunchOverskill.Indigo");
    SetupTag("Skill.ThePunchOverskill.Pink");
    SetupTag("Skill.ThePunchOverskill.Sapphire");
    SetupTag("Skill.ThePunchOverskill.Byzantine");
    SetupTag("Skill.ThePunchOverskill.Fuchsia");
    SetupTag("Effect.Damage");
    SetupTag("Effect.ArmorPenetration");
    SetupTag("Preplanning.Camera.Hallway");
    SetupTag("Preplanning.Camera.All");
    SetupTag("Preplanning.Keycard.Office");
    SetupTag("Preplanning.PagerIncrease");
    SetupTag("Preplanning.HostageDecrease");
    SetupTag("Preplanning.AmmoPickupIncrease");
    SetupTag("Preplanning.NegotiationTimeIncrease");
    SetupTag("Preplanning.Uni");
    SetupTag("Object.Sabotageable");
    SetupTag("Objective.OverkillTutorial");
    SetupTag("Bag.Dyed");
    SetupTag("Bag.Meth.Normal");
    SetupTag("Bag.Meth.Pure");
    SetupTag("Bag.Meth.Burnt");
    SetupTag("Bag.CombinedServer");
    SetupTag("Bag.AICore");
    SetupTag("System.CanActivateIgnoreCancel");

}

FGameplayTag USBZGameplayTags::SetupTag(FName TagName)
{
    UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();
    return TagsManager.AddNativeGameplayTag(TagName);
}